#include <functions.hpp>


__declspec(dllexport) std::string current_time(){
    std::time_t now = std::time(nullptr);
    std::tm *curtime = std::localtime(&now);
    std::string time = std::to_string(curtime->tm_hour) + ":" + std::to_string(curtime->tm_min) + ":" + std::to_string(curtime->tm_sec);
    return time;
}


__declspec(dllexport) void Logger::TRACER(int loglevel, const std::string text){
    if (loglevel < loglevel_){
        return;
    }
    if (loglevel == 1){
        std::string time = current_time();
        std::cout<<"!TRACER! "<<time<<" "<<text<<std::endl;
    }
}

__declspec(dllexport) void Logger::INFO(int loglevel, const std::string text, const std::string object_name){
    if (loglevel < loglevel_){
        return;
    }
    if (loglevel == 2){
        std::string time = current_time();
        std::cout<<"!TRACER! "<<time<<" "<<text<<" "<<object_name<<std::endl;
    }
}

__declspec(dllexport) void Logger::DEBUG(int loglevel, const std::string text, std::string object_name, int changes){
    if (loglevel < loglevel_){
        return;
    }
    if (loglevel == 3){
        std::string time = current_time();
        std::cout<<"!DEBUG! "<<time<<" "<<text<<object_name<<" = "<<changes<<std::endl;
    }
}

__declspec(dllexport) void Logger::WARNING(int loglevel, const std::string text, std::string object, std::string name_object, int line){
    if (loglevel < loglevel_){
        return;
    }
    if (loglevel == 4){
        if (object.length()>10){
            std::string time = current_time();
            std::cout<<"!WARNING! "<<time<<" "<<text<<" "<<name_object<<" "<<"Строчка кода: "<<line<<" "<<__FILE__<<std::endl;
        }
    }
}

__declspec(dllexport) void Logger::ERROR(int loglevel, const std::string text, std::string object, std::string name_object, int line){
    if (loglevel < loglevel_){
        return;
    }
    if (loglevel == 5){
        for (int i = 0; i<object.length(); ++i){
            if (object[i] < '0' || object[i] > '9'){
                std::string time = current_time();
                std::cout<<"!ERROR! "<<time<<" "<<text<<" "<<name_object<<" "<<"Строчка кода"<<line<<" "<<__FILE__<<std::endl;
            }
        }
    }
}

__declspec(dllexport) void Logger::CRITICAL(int loglevel, const std::string text, int object, std::string name_object, int line){
    if (loglevel < loglevel_){
        return;
    }
    if (loglevel == 6){
        if (object > 2147483638){
            std::string time = current_time();
            std::cout<<"!CRITICAL! "<<time<<" "<<text<<" "<<name_object<<" "<<"Строчка кода: "<<line<<" "<<__FILE__<<std::endl;
        }
    }
}


