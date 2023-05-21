#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <FreeImage.h>

void addImageToBatFile(const std::string& imagePath, int x, int y, const std::string& batFilePath) {
    std::ofstream batFile(batFilePath, std::ios::app);
    if (!batFile.is_open()) {
        std::cout << "Failed to open bat file" << std::endl;
        return;
    }

    batFile << "REM Adding image: " << imagePath << " at coordinates (" << x << ", " << y << ")" << std::endl;
    // Здесь можно добавить соответствующие команды в бат-файл для обработки изображения

    batFile.close();

    std::cout << "Image added to bat file." << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cout << "Usage: name-of-plugin.exe batfile=<BAT_FILE_PATH> image=<IMAGE_PATH> x=<X_COORD> y=<Y_COORD>" << std::endl;
        return 1;
    }

    std::string batFilePath;
    std::string imagePath;
    int x = 0;
    int y = 0;

    // Парсинг аргументов командной строки
    for (int i = 1; i < argc; ++i) {
        std::string argument = argv[i];
        if (argument.find("batfile=") == 0) {
            batFilePath = argument.substr(8);
        } else if (argument.find("image=") == 0) {
            imagePath = argument.substr(6);
        } else if (argument.find("x=") == 0) {
            x = std::stoi(argument.substr(2));
        } else if (argument.find("y=") == 0) {
            y = std::stoi(argument.substr(2));
        }
    }

    // Проверка наличия обязательных аргументов
    if (batFilePath.empty() || imagePath.empty()) {
        std::cout << "Missing bat file path or image path argument." << std::endl;
        return 1;
    }

    // Загрузка изображения с помощью FreeImage
    FREE_IMAGE_FORMAT imageFormat = FreeImage_GetFileType(imagePath.c_str(), 0);
    FIBITMAP* image = FreeImage_Load(imageFormat, imagePath.c_str());

    if (!image) {
        std::cout << "Failed to load image: " << imagePath << std::endl;
        return 1;
    }

    // Обработка изображения

    // Освобождение памяти, занятой изображением
    FreeImage_Unload(image);

    // Вызов функции для добавления изображения в бат-файл
    addImageToBatFile(imagePath, x, y, batFilePath);

    return 0;
}

//Всё написала нейронка
