<?php

function get($conn, $select, $from) 
{
	
#$Status=$_GET["Status"];
$sql="SELECT $select from $from";
$result=$conn->query($sql);

return $result;
}
//get($conn, "*", "item_stocks"); contoh pemanggilan

//$sql2=$conn->query("DELETE FROM item_stocks WHERE Item='Vitacov'");
?>

