#include<utils/Log.h>

int main(void) {
    ALOGE(">>>> SERVICE HELLOGIO STARTED <<<<");
    while(1) {
        sleep(5);
        ALOGE("BEAT BEAT EACH 5 SECONDS");
    }
    return 0;
}
