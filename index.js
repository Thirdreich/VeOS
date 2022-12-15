const { app, BrowserWindow } = require('electron')

function createWindow () {
    const mainWindow = new BrowserWindow({
        fullscreen: true
    })
    mainWindow.loadFile('kernel.html')
}

app.whenReady().then(() => {
    createWindow()
})