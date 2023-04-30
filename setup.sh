echo "Installing tools..."
haxelib install flixel
haxelib install lime
haxelib install openfl
haxelib run lime setup
haxelib install flixel-tools
haxelib run flixel-tools setup
echo "Done !"
