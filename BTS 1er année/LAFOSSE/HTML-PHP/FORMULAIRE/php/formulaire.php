<?php





//echo "<h3>Vous vous appelez : ".$_POST['nom']."</h3>";



if($_POST['identifiant']==""){
echo "<h1>VOUS DEVEZ SAISIR UN IDENTIFIANT</h1><br/>";
}


if($_POST['mdp']==""){
echo "<h1>VOUS DEVEZ SAISIR UN MOT DE PASSE</h1><br/>";
}



if($_POST['identifiant']=="jlafosse" && $_POST['mdp']=="jerome"){
echo "<h1>VOUS ETES OK</h1><br/>";
}else {
echo "<h1><a href=\"../poubelle.html\">ERREUR LORS DE L'AUTHENTIFICATION !</a></h1><br/>";

}








?>