<!DOCTYPE html>
<!--
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
-->
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <?php
        require_once ("Personne.php");
        ?>
        
        Merci de saisir vos coordonnées<br/><br/>
        
        <form name="Authentification" action="detail.php" method="POST">
            
            Nom: <input type="text" name="nom" placeholder="" value=""/><br/><br/>
            Prénom: <input type="text" name="prenom" placeholder="" /><br/><br/>
            Age: <input type="text" name="age" placeholder="" /><br/><br/>
            Profession: <input type="text" name="profession" placeholder="" /><br/><br/><br/>
        
            Quel est votre sexe?<br/><br/>

            Homme : <input type="radio" name="sexe" value="un homme"><br/>
            Femme : <input type="radio" name="sexe" value="une femme"><br/><br/><br/>
            
            
            Quelles sont vos passions ?<br/><br/>
            
            Musique : <input type="checkbox" name="passion" value="musique"><br/>
            Sport : <input type="checkbox" name="passion" value="sport"><br/>
            Jeux vidéo : <input type="checkbox" name="passion" value="jeux"><br/><br/><br/>

            Quelle est votre nationalité ?<br/><br/>
            <select  style="width:120px;" name="nationalite">
                <option value="Française">Française</option>
                <option value="Englaise">Englaise</option>
                <option value="Russe">Russe</option>
            </select><br/><br/><br/>

<!--             name = afficher pour faire qu'une page main.php (avec le php dans la page)-->
            <input type="submit" value="Afficher" name="afficher"/>


</form> 
        
    </body>
</html>
