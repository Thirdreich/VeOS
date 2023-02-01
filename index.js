const { app, BrowserWindow } = require('electron')

function createWindow () {
    const mainWindow = new BrowserWindow({
        fullscreen: true
    })
    mainWindow.loadFile('sys/BOOTLOADER.html')
}

app.whenReady().then(() => {
    createWindow()
})