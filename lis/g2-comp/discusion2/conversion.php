<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formulario de ingreso de datos</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/js/bootstrap.bundle.min.js"></script> 
    <link rel="stylesheet" href="style/s1.css">
</head>
<body>
    <h1>Conversion de monedas</h1>
    <div class="boxed">
        <form action="conversion.php" method="get">
            <p>Ingrese el monto en dolares</p>
            <label for="monto">$</label>
            <input type="number" name="monto" id="monto" class="control">
        </form>
    </div>
</body>
</html>