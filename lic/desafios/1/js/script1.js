//script del problema 1, para mostrar el saludo personalizado

document.getElementById('nombreForm').addEventListener('submit', function(event) {
    
    event.preventDefault();


    const userName = document.getElementById('nombre').value;
    
//para ve si el usuario si puso algo
    if(userName == "" || userName == " ") {
        resultadoENG.textContent = "No ha ingresado ningun nombre";
        resultadoESP.textContent = "";
        resultadoFRA.textContent = "";
        resultadoDUT.textContent = "";
        resultadoHAN.textContent = "";
    }
    else {
        let mensajeENG = `Hello there, ${userName}. `;
        let mensajeESP = `Mucho gusto, ${userName}. `;
        let mensajeFRA = `Bonjour, ${userName}. `;
        let mensajeDUT = `Halo, ${userName}. `;
        let mensajeHAN = `안녕하세요 ${userName}`;
        
    
    
        
        const resultadoENG = document.getElementById('resultadoENG');
        const resultadoESP = document.getElementById('resultadoESP');
        const resultadoFRA = document.getElementById('resultadoFRA');
        const resultadoDUT = document.getElementById('resultadoDUT');
        const resultadoHAN = document.getElementById('resultadoHAN');
        resultadoENG.textContent = mensajeENG;
        resultadoESP.textContent = mensajeESP;
        resultadoFRA.textContent = mensajeFRA;
        resultadoDUT.textContent = mensajeDUT;
        resultadoHAN.textContent = mensajeHAN;
    }   

});