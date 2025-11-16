let valName = document.getElementById("valName");
let valEmail = document.getElementById("valEmail");
let valPass = document.getElementById("valPass");

let nombre = document.getElementById("firstName");
let email = document.getElementById("email");
let password = document.getElementById("passwd");

let valor = "";

nombre.addEventListener("input", checkName);

function checkName(e){
    valor = e.value;
    console.log(valor);
    if(valor.length < 2){
        valName.textContent = "Su nombre debe de tener al menos 3 caracteres";
    }
}
email.addEventListener("input", checkEmail,false);

function checkEmail(e){
    const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    valor = e.value;

    console.log(valor);
    if(!emailRegex.text(valor)){
        valEmail.textContent = "Su correo no es valido";
    }
    if(valor.length < 4){
        valEmail.textContent = "Su correo es muy corto";
    }
}
password.addEventListener("input", checkPass,false);

function checkPass(e){
    valor = e.value;
    console.log(valor);
    if(valor.length < 8){
        valPass.textContent = "Su contrasena de tener al menos 8 caracteres";
    }
    else if(valor.length > 16) {
        valPass.textContent = "Su contrasena no debe de tener mas de 16 caracteres"
    }
}