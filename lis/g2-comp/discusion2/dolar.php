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
    <header>    
        <h1>Conversion de monedas</h1>
    </header>
    <div class="boxed">
        <?php
            if(!isset($_POST['send'])):
        ?>
        <form ction="<?= $_SERVER['PHP_SELF']; ?>" method="POST">
            <p>Ingrese el monto en dolares</p>
            <label for="monto">$</label>
            <input type="number" name="monto" id="monto" class="control">
            <button type="submit" name="send">Convertir</button>
        </form>

        <?php
            else:
                $montoUSD = floatval($_POST['monto']);
                if($montoUSD < 0) {
                    echo "<div class='alert alert-danger text-center mt-3'>Por favor, ingrese un monto igual o mayor a 0</div>"; 
                    echo "<div class='text-center mt-3'><a href='" . $_SERVER['PHP_SELF'] . "' class='btn btn-secondary'>Intentar de nuevo</a></div>"; 
                }
                else {
                    $montoEUR = $montoUSD * 0.95;
                    echo '<table><thead class="headT">';
                    echo '    <tr>';
                    echo '        <td>Valor USD</td>';
                    echo '        <td>Valor EUR</td>';
                    echo '    </tr></thead>';
                    echo '    <tr><tbody class="contT">';
                    echo '        <td>$'.number_format($montoUSD, 2, '.', ','). '</td>';
                    echo '        <td>$'.number_format($montoEUR, 2, '.', ','). '</td>';
                    echo '    </tr></tbody>';
                    echo '</table>';
                    
                }
            endif;
        ?>
        
    </div>
</body>
</html>