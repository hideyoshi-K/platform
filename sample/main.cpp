#include <iostream>
#include <platform.hpp>

int main(int argc, char* argv[])
{
    std::cout << "Hello World" << std::endl;

    Platform platform;

    platform.initialize();

    platform.start();

    platform.stop();

    platform.finalize();
        
    return 0;
}
