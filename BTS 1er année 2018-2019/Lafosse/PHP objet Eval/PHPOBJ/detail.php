<?php
    
require_once ("Personne.php");

if (isset($_POST['nom']) && isset($_POST['prenom']) && isset($_POST['age']) && isset($_POST['sexe']) && isset($_POST['nationalite'])) {
    $a = new Personne();
    
    $a->setNom($_POST['nom']);
    $a->setPrenom($_POST['prenom']);  
    $a->setAge($_POST['age']);
    $a->setProfession($_POST['profession']);
    $a->setSexe($_POST['sexe']);
    $a->setPassion($_POST['passion']);
    $a->setNationalite($_POST['nationalite']);
    	echo 'Merci voici votre fiche personnelle<br/><br/>'
    . 'Votre vous appelez '.$a->getNom().' '.$a->getPrenom().' et vous avez '.$a->getAge().' ans.<br/><br/>'
    .'Vous êtes '.$a->getSexe().', vous aimez '.$a->getPassion().' et vous êtes de nationalité '.$a->getNationalite().'.';

        // pour les passions ça ne marche pas, le isset($_POST['passion']) fait que on n'entre jamais dans le if
}
else{echo 'Vous n\'avez pas tout complété';}

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


