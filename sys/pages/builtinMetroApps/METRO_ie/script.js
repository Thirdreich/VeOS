function pageLoaded() {
    document.querySelector('input').value = document.querySelector('iframe').src.split('?url=').pop();
}

function url(ele) {
    if (event.key === 'Enter') {
        if (ele.value.startsWith('http'))
            document.querySelector('iframe').src = `http://gohoski.fvds.ru:3000/?url=${ele.value}`;
        else
        document.querySelector('iframe').src = `http://gohoski.fvds.ru:3000/?url=https://duckduckgo.com/${encodeURIComponent(`?q=${ele.value}`)}`;
    }
}