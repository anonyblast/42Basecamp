function detectMobile() {
    if (/Android|webOS|iPhone|iPad|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent)) {
        return true;
    } else {
        return false;
    }
}

function modifyBodyHTML() {
    if (detectMobile()) {
        document.getElementsByTagName("body")[0].classList.add("mobile");
        
    } else {
        document.getElementsByTagName("body")[0].classList.add("desktop");
    }
}