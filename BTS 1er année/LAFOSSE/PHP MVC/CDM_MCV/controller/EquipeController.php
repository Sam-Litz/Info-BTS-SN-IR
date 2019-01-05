<?php

require_once ("../class/Equipe.php");
require_once ("../model/EquipeModel.php");

$equipeModel = new EquipeModel();
$equipeModel->connexion();


if (!isset($_REQUEST['a']) || $_REQUEST['a'] == "") {
    $listeEquipes = $equipeModel->read();
    include_once ("../view/ListerEquipe.php");
    exit();
}


if (isset($_REQUEST['a']) && $_REQUEST['a'] == 'supprimer' && $_REQUEST['idEquipe']!="") {
    $res = $equipeModel->delete($_REQUEST['idEquipe']);
    header("Location:EquipeController.php");
    exit();
}




if (isset($_REQUEST['a']) && $_REQUEST['a'] == "ajouter") {
    $equipe = new Equipe();
    include_once("../view/EditerEquipe.php");
    exit();
}

if (isset($_REQUEST['a']) && $_REQUEST['a'] == "ValiderAjouter") {
    $equipe = new Equipe();
    $equipe->setLibelle($_POST['libelle']);
  
    if ($equipe->getLibelle() != '') {
        $equipeModel->create($equipe);
        header("Location:EquipeController.php");
        exit();
    }
}







if (isset($_REQUEST['a']) && $_REQUEST['a'] == "modifier" && $_REQUEST['idEquipe'] != "") {
    $equipe = $equipeModel->charger($_REQUEST['idEquipe']);
    include_once("../view/EditerEquipe.php");
    exit();
}


if (isset($_REQUEST['a']) && $_REQUEST['a'] == "ValiderModifier") {
    $equipe = new Equipe();
    $equipe->setIdEquipe($_POST['idEquipe']);
    $equipe->setLibelle($_POST['libelle']);
    

    
    if ($equipe->getLibelle() != '' && $equipe->getIdEquipe() != '') {
        $equipeModel->update($equipe);
    }
    
    header("Location:EquipeController.php");
    exit();
}