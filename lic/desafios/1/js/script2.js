//Script con la calculadora de imc

document.getElementById('imcForm').addEventListener('submit', function(event) {
    
    //algo 
    event.preventDefault();

    
    const weight = parseFloat(document.getElementById('weight').value);
    const height = parseFloat(document.getElementById('height').value);
    const resultado = document.getElementById('resultado');

    //NaN es not a number
    //para no ingresar valores fuera de lugar
    if (isNaN(weight) || isNaN(height) || weight <= 1 || height <= 1 || height > 2.8) {
        resultado.textContent = 'Por favor, ingrese valores válidos para su peso y altura.';
        return;
    }

    // Calcular IMC weight(kg) / altura2 (m)
    const imc = weight / (height * height);
    let mensaje = `Tu IMC es de ${imc.toFixed(2)} kg/m2. `;

    // Determinar el rango del IMC y el mensaje
    //fuente https://www.nosotras.com.mx/wp-content/uploads/2023/08/Como-calcular-tu-indice-de-masa-corporal-y-saber-si-es-saludable-4.jpg
    if (imc < 18.50) {
        mensaje += 'Usted se encuentra en desnutrición';
    }
    else if (imc >= 18.5 && imc < 25){
        mensaje += 'Tiene un peso Normal';
    }
    else if (imc >= 25 && imc < 30) {
        mensaje += 'Sobrepeso';
    }
    else if (imc >= 30 && imc < 35){
        mensaje += 'Obesidad Tipo I';
    }
    else if (imc >= 35 && imc < 40){
        mensaje += 'Obesidad Tipo II';
    }
    else if(imc >= 40) {
        mensaje += 'Obesidad Tipo III';
    }

    resultado.textContent = mensaje;
});