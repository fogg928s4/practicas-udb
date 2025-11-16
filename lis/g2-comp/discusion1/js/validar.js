const combo = document.getElementById('placeCombo');
const place = document.getElementById('place');

document.getElementById('national').addEventListener('click', checks, false);



function checks(e) {
    if (document.getElementById('national').checked) {
        //if its a national
       /* combo.innerHTML= '';
        departaments.forEach(dep => {
            combo.innerHTML += '<option value="' + dep + '>' + dep + '</option>';
        });*/
        document.getElementById('ltext').textContent = 'Escriba su departamento de origen';
    }
    else if (document.getElementById('foreign').checked) {
        // if a foreigner
        //combo.innerHTML= '';
        //countries.forEach(con => {
        //    combo.innerHTML += '<option value="' + con + '>' + con + '</option>';
        //});
           
    }
}