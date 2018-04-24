// extern "C" int shl(int a, int );

#include <functional>
#include <dlfcn.h>

template<class singature>
class dll_function {
    const char* operator()() { return "not specified"; }
};

template<class return_type, class... arg_types>
class dll_function<return_type(arg_types...)> : private std::function<return_type(arg_types...)> {
    using func_ptr_t = return_type(*)(arg_types...);
    void* handle;
public:
    dll_function(const char* name) 
        : std::function<return_type(arg_types...)>(
            (func_ptr_t)dlsym(
                handle = dlopen("dynamic_manual/libdynamic_manual.so", RTLD_LAZY), name
            )) {
        const char* error = dlerror();
        if (error) {
            std::cerr << error << std::endl;
            dlclose(handle);
            exit(-1);
        }
    }
    
    ~dll_function() {
        dlclose(handle);
    }

    using std::function<return_type(arg_types...)>::operator();
};
dll_function<int(int, int)> shl("shl");
