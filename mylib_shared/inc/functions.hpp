#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include <filesystem>

extern "C" {
    __declspec(dllexport) int foo(int a, int b);
}

__declspec(dllexport) std::string current_time();

class __declspec(dllexport) Logger {

    public:
        __declspec(dllexport) void set_loglevel (int loglevel_);
        __declspec(dllexport) void TRACER(int loglevel ,const std::string text);
        __declspec(dllexport) void INFO(int loglevel, const std::string text,const std::string object_name);
        __declspec(dllexport) void DEBUG(int loglevel, const std::string text, std::string object_name, int changes);
        __declspec(dllexport) void WARNING(int loglevel, const std::string text, std::string object, std::string name_object,int line);
        __declspec(dllexport) void ERROR(int loglevel, const std::string text, std::string object, std::string name_object, int line);
        __declspec(dllexport) void CRITICAL(int loglevel, const std::string text, int object, std::string name_object, int line);


    private:
        int loglevel_ = 1;
};
