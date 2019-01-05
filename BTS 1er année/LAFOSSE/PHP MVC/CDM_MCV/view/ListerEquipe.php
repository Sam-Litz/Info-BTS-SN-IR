<html lang="fr">
    <head>
        <meta charset="UTF-8"/>
        <title>Titre</title>
    </head>

    <body>
        <h4>Liste des equipes</h4>

        <a href="EquipeController.php?a=ajouter">Ajouter</a><br/><br/>
    </body>

    <table border="1" width="100%" cellpadding="4"/>
    <tr><td>Libelle</td><td>idEquipe</td><td>Position</td><td colspan="2">Gestion</td></tr>

    <?php
    if (!empty($_REQUEST["messageErreur"])) {
        echo "<div style=\"color:red\">Erreur de saisie</div>";
    }

    foreach ($listeEquipes as $equipe) {
        echo "<tr>";
        echo "<td>" . $equipe->getLibelle() . "</td>";
        echo "<td>" . $equipe->getIdEquipe() . "</td>";
        echo "<td>" . $equipe->getPosition() . "</td>";
        echo "<td><a href=\"EquipeController.php?a=modifier&idEquipe=" . $equipe->getIdEquipe() . "\">modifier</a></td>";
        echo "<td><a href=\"EquipeController.php?a=supprimer&idEquipe=" . $equipe->getIdEquipe() . "\">supprimer</a></td>";
        echo "</tr>";
    }
    ?>

</table> 