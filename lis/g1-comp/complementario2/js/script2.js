const subBtn = document.getElementById('submitbtn');
let msg = document.getElementById('message').textContent;

subBtn.addEventListener('click', validateEntries, false);
subBtn.addEventListener('submit', validateEntries, false);

function validateEntries(e){
    if(checkEmail(e) == false ||checkName(e) == false || checkPass(e) == false ) {
        msg = 'Los campos no son válidos, por favor verificar los campos';
        
    }
    else{
        msg = 'Todos los campos son válidos :D';
    }
}