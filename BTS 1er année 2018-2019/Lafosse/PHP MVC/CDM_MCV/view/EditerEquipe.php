<?php
include_once '../model/EquipeModel.php';
   ?>

<html lang="fr">
    <head>
        <meta charset="UTF-8"/>
        <title>Ma page</title>
    </head>

    <body>
        <form method="post" action="../controller/EquipeController.php">
            
            <?php
            if ($equipe != null && $equipe->getIdEquipe() != "") {
                echo "<h3>Modifier une équipe</h3>";
                echo "<input type=\"hidden\" name=\"a\" value=\"ValiderModifier\"/>";
                echo "<input type=\"hidden\" name=\"idEquipe\" value=\"" . $equipe->getIdEquipe() . "\"/>";
            } 
            
            else {
                echo "<h3>Ajouter une équipe</h3>";
                echo "<input type=\"hidden\" name=\"a\" value=\"ValiderAjouter\"/>";
            }
            ?>

            Libelle : <input type="text" name="libelle" value="<?php echo $equipe->getLibelle() ?>"><br/><br/>
            Position : <input type="text" name="position" value="<?php echo $equipe->getPosition() ?>"><br/><br/>
            <input type="submit" value="Editer">
            
        </form>    
    </body>
</html>