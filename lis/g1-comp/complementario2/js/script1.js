const valName = document.getElementById("valName");
const valEmail = document.getElementById("valEmail");
const valPass = document.getElementById("valPass");
//const nombre = document.getElementById("firstName");
const email = document.getElementById("email");
//const password = document.getElementById("passwd");
let valor = "";

//name validation
//nombre.addEventListener("input", checkName);

function checkName(e){
    let nombre = document.getElementById("firstname").value;

    valor = e.value;
    console.log(nombre);
    if(nombre.length < 2){
        valName.textContent = "Su nombre debe de tener al menos 3 caracteres";
    }
}

//email validation
//email.addEventListener("input", checkEmail,false);

function checkEmail(e){
    const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    let correo = document.getElementById('email').value;

    console.log(correo);
    if(!emailRegex.test(correo)){
        valEmail.textContent = "Su correo no es valido";
        return false;
    }
    if(correo.length < 4){
        valEmail.textContent = "Su correo es muy corto";
        return false;
    }
    return true;
}
//password.addEventListener("input", checkPass,false);

function checkPass(e){
    let pass = document.getElementById("passwd").value;

    valor = e.value;
    console.log(pass);
    if(pass.length < 8 || pass.length > 16){
        valPass.textContent = "Su contrasena de tener al menos 8 caracteres y menos de 16";
        return false;
    }
    return true;
}

