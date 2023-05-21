from PIL import Image

def add_image_to_bat_file(image_path, x, y, bat_file_path):
    # Открываем изображение
    image = Image.open(image_path)

    # Создаем пустое изображение для бат-файла
    bat_img = Image.new("RGB", image.size)

    # Копируем содержимое изображения в бат-файл
    bat_img.paste(image)

    # Открываем бат-файл для записи
    with open(bat_file_path, "a") as bat_file:
        # Записываем информацию об изображении в бат-файл
        bat_file.write("\n\n")
        bat_file.write(f"Image: {image_path}\n")
        bat_file.write(f"Coordinates: X={x}, Y={y}\n")
        bat_file.write("\n")

        # Записываем изображение в бат-файл в виде ASCII-арта
        for row in range(bat_img.height):
            line = ""
            for col in range(bat_img.width):
                r, g, b = bat_img.getpixel((col, row))
                # Преобразуем цвета пикселей в символы ASCII
                if r > 128 or g > 128 or b > 128:
                    line += " "
                else:
                    line += "#"
            bat_file.write(line + "\n")

    print(f"Added image {image_path} to {bat_file_path}")

# Пример использования
image_path = "/path/to/image.bmp"
x = 10
y = 20
bat_file_path = "/path/to/output.bat"

add_image_to_bat_file(image_path, x, y, bat_file_path)
#Всё сделано GPT
