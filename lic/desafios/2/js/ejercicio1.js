let gallery = document.getElementById("gallery");
let menu = document.getElementById("menu");
menu.addEventListener("change", selectOpt,false);

//segun la seleccion realiza una accion con cierta galeria
function selectOpt(e){
    console.log(e.target.value);
    switch(e.target.value) {
        case '1':
            fillGallery();
            break;
        case '2':
            animalGallery();
            break;
        case '3':
            natureGallery();
            break;
        case '4':
            humanGallery();
            break;
    }
}
function fillGallery(){
    gallery.innerHTML = "";
    for(let i=0; i<18;i++) {
        //console.log(galler.innerHTML);
        
        gallery.innerHTML += "<img src=\"img/BingWallpaper (" + i +").jpg\" alt=\"image" + i +  "\"/>";
        //console.log(gallery.innerHTML);
    }
}
function animalGallery(){
    gallery.innerHTML = "";
    for(let i=0; i<4;i++) {
        //console.log(galler.innerHTML);
        
        gallery.innerHTML += "<img src=\"img/BingWallpaper (" + i +").jpg\" alt=\"image" + i +  "\"/>";
        //console.log(gallery.innerHTML);
    }
}
function natureGallery(){
    gallery.innerHTML = "";
    for(let i=4; i<11;i++) {
        //console.log(galler.innerHTML);
        
        gallery.innerHTML += "<img src=\"img/BingWallpaper (" + i +").jpg\" alt=\"image" + i +  "\"/>";
        //console.log(gallery.innerHTML);
    }
}
function humanGallery() {
    gallery.innerHTML = "";
    for(let i=13; i<19;i++) {
        //console.log(galler.innerHTML);
        
        gallery.innerHTML += "<img src=\"img/BingWallpaper (" + i +").jpg\" alt=\"image" + i +  "\"/>";
        //console.log(gallery.innerHTML);
    }
}

window.addEventListener("load",fillGallery,false);