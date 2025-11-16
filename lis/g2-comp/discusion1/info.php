<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formulario de ingreso de datos</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/js/bootstrap.bundle.min.js"></script> 
  
</head>
<body>
    <section class="container my-5">
        <article>
            <h1 class="text-center fw-bold">Info del formulario</h1>
            <div class="table-responsive" id="info">
                <table class="table-striped table table-bordered">
                    <thead class="table-primary">
                        <tr>
                            <th scope="col">Campo</th>
                            <th scope="col">Entrada</th>
                        </tr>
                    </thead>
                    <tbody>
                        <?php
                            //get post variables and check state
                            if($_SERVER['REQUEST_METHOD'] === 'POST' && isset($_POST['submit'])){
                                echo '<tr>';
                                echo '<td>Nombre</td>';

                                //Access form data with extract()
                                extract($_POST);
                                $nombre = !empty($fname) ? $fname : '<a href="ingresodatos.html" class="txt-danger"> No Ingreso el nombre :( </a>';
                                $apellido = !empty($lname) ? $lname : '<a href="ingresodatos.html" class="txt-danger"> No Ingreso el apellido :( </a>';
                                echo '<td>'.$nombre.' '.$apellido.'</td> ';
                                echo '</tr>';

                                echo '<tr>';
                                echo '<td>Lugar de origen</td>';
                                //Access form data
                                $lugar = !empty($place) ? $place : '<a href="ingresodatos.html" class="txt-danger"> No Ingreso el origen de la persona :( </a>';
                                echo '<td>'.$lugar.'</td> ';
                                echo ' </tr> ';

                                echo ' <tr> ';
                                echo '  <td>Carnet</td> ';
                                //Access form data
                                $Carnet = !empty($carnet) ? $carnet : '<a href="ingresodatos.html" class="txt-danger"> No Ingreso el precio :( </a>';
                                echo '<td>'.$Carnet.'</td> ';
                                echo ' </tr> ';


                                echo ' <tr> ';
                            }
                        ?>
                    </tbody>
                </table>
                <div id="link" class="text-center mt-4"></div>
                <a href="ingresodatos.html" class="btn-primary btn">Ingesar nuevos datos</a>
            </div>
        </article>
    </section>
</body>