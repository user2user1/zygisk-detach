#include "zygisk.hpp"

class MyZygiskModule : public zygisk::ModuleBase {
public:
    void onLoad(zygisk::Api *api, JNIEnv *env) override {
        this->api = api;
        this->env = env;
    }

    void preAppSpecialize(zygisk::AppSpecializeArgs *args) override {
        // Hook code here
    }

    void postAppSpecialize(const zygisk::AppSpecializeArgs *args) override {
        // Code here
    }

    void preServerSpecialize(zygisk::ServerSpecializeArgs *args) override {
        // Code here
    }

    void postServerSpecialize(const zygisk::ServerSpecializeArgs *args) override {
        // Code here
    }

private:
    zygisk::Api *api;
    JNIEnv *env;
};

REGISTER_ZYGISK_MODULE(MyZygiskModule)