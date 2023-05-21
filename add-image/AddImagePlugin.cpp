#include <iostream>
#include <fstream>
#include <sstream>

void updateImageCoordinates(const std::string& batFilePath, const std::string& imageFilePath, int newX, int newY) {
    std::ifstream batFile(batFilePath);
    if (!batFile.is_open()) {
        std::cout << "Failed to open bat file" << std::endl;
        return;
    }

    std::ostringstream updatedBatContent;
    std::string line;
    bool foundImage = false;

    // Обновляем координаты и изображение в бат-файле
    while (std::getline(batFile, line)) {
        if (line.find("Image: ") != std::string::npos && line.find(imageFilePath) != std::string::npos) {
            updatedBatContent << line << std::endl;
            updatedBatContent << "Coordinates: X=" << newX << ", Y=" << newY << std::endl;
            foundImage = true;
        } else {
            updatedBatContent << line << std::endl;
        }
    }

    batFile.close();

    if (!foundImage) {
        std::cout << "Image not found in the bat file" << std::endl;
        return;
    }

    std::ofstream updatedBatFile(batFilePath);
    if (!updatedBatFile.is_open()) {
        std::cout << "Failed to open bat file for update" << std::endl;
        return;
    }

    // Записываем обновленное содержимое бат-файла
    updatedBatFile << updatedBatContent.str();

    updatedBatFile.close();

    std::cout << "Updated coordinates in " << batFilePath << " for " << imageFilePath << " to X=" << newX << ", Y=" << newY << std::endl;
}

void addImageToBatFile(const std::string& imagePath, int x, int y, const std::string& batFilePath) {
    std::ofstream batFile(batFilePath, std::ios::app);
    if (!batFile.is_open()) {
        std::cout << "Failed to open bat file" << std::endl;
        return;
    }

    // Записываем информацию об изображении в бат-файл
    batFile << std::endl;
    batFile << "Image: " << imagePath << std::endl;
    batFile << "Coordinates: X=" << x << ", Y=" << y << std::endl;
    batFile << std::endl;

    // Читаем BMP файл в бинарном режиме
    std::ifstream imageFile(imagePath, std::ios::binary);
    if (!imageFile.is_open()) {
        std::cout << "Failed to open image file" << std::endl;
        batFile.close();
        return;
    }

    // Копируем содержимое BMP файла в бат-файл
    batFile << imageFile.rdbuf();

    imageFile.close();
    batFile.close();

    std::cout << "Added image " << imagePath << " to " << batFilePath << std::endl;
}

int main() {
    std::string imagePath = "/path/to/image.bmp";
    int x = 10;
    int y = 20;
    std::string batFilePath = "/path/to/output.bat";

    addImageToBatFile(imagePath, x, y, batFilePath);

    // Обновляем координаты и изображение в бат-файле
    int newX = 30;
    int newY = 40;
    updateImageCoordinates(batFilePath, imagePath, newX, newY);

    return 0;
}
//Всё написала нейронка
