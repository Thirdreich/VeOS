cp VlaicuOS.img iso/
genisoimage -quiet -V 'VlaicuOS' -input-charset iso8859-1 -o VlaicuOS.iso -b VlaicuOS.img \
    -hide VlaicuOS.img iso/