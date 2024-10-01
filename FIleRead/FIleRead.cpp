// FIleRead.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
 
int main()
{
    const char* path = "C:\\Users\\UnderKo\\source\\repos\\Lib.REditHEX\\app_data\\fileread_test.data";
    FILE* _file = fopen(path, "w+");
    if (_file) {
         
        char buffer[] = "123";
        fwrite(buffer, sizeof(buffer)-1, 1, _file);
        
        char r_buffer[100];
        while (!feof(_file))
        {
            fread(r_buffer, sizeof(r_buffer), 1, _file);
            std::cout << r_buffer << std::endl;
        }
       

       

    }

    fclose(_file);

    std::cout << "Hello World!\n";
}
 