package main

import (
	"fmt"
	"image"
	"image/draw"
	"image/jpeg"
	"image/png"
	"os"
)

func addImageToBatFile(imagePath string, x, y int, batFilePath string) error {
	// Открываем изображение
	file, err := os.Open(imagePath)
	if err != nil {
		return fmt.Errorf("failed to open image: %v", err)
	}
	defer file.Close()

	// Загружаем изображение в память
	img, format, err := image.Decode(file)
	if err != nil {
		return fmt.Errorf("failed to decode image: %v", err)
	}

	// Создаем пустое изображение для бат-файла
	batImg := image.NewRGBA(image.Rect(0, 0, img.Bounds().Dx(), img.Bounds().Dy()))
	draw.Draw(batImg, batImg.Bounds(), img, img.Bounds().Min, draw.Src)

	// Открываем бат-файл для записи
	batFile, err := os.OpenFile(batFilePath, os.O_APPEND|os.O_WRONLY, os.ModeAppend)
	if err != nil {
		return fmt.Errorf("failed to open bat file: %v", err)
	}
	defer batFile.Close()

	// Записываем информацию об изображении в бат-файл
	batFile.WriteString(fmt.Sprintf("echo -e \"\\n\\n\" >> %s\n", batFilePath))
	batFile.WriteString(fmt.Sprintf("echo Image: %s >> %s\n", imagePath, batFilePath))
	batFile.WriteString(fmt.Sprintf("echo Coordinates: X=%d, Y=%d >> %s\n", x, y, batFilePath))
	batFile.WriteString(fmt.Sprintf("echo. >> %s\n", batFilePath))

	// Записываем изображение в бат-файл в виде ASCII-арта
	for y := 0; y < batImg.Bounds().Dy(); y++ {
		line := ""
		for x := 0; x < batImg.Bounds().Dx(); x++ {
			r, g, b, _ := batImg.At(x, y).RGBA()
			// Преобразуем цвета пикселей в символы ASCII
			if r > 32768 || g > 32768 || b > 32768 {
				line += " "
			} else {
				line += "#"
			}
		}
		batFile.WriteString(fmt.Sprintf("echo %s >> %s\n", line, batFilePath))
	}

	fmt.Printf("Added image %s to %s\n", imagePath, batFilePath)
	return nil
}

func main() {
	imagePath := "/path/to/image.bmp"
	x := 10
	y := 20
	batFilePath := "/path/to/output.bat"

	err := addImageToBatFile(imagePath, x, y, batFilePath)
	if err != nil {
		fmt.Printf("Error: %v\n", err)
	}
}
// ВСЁ ДЕЛАЛА НЕЙРОНКА !
