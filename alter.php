<?php

function add($conn, $table, $add, $type) 
{
	
$sql="ALTER TABLE $table ADD $add $type";
$result=$conn->query($sql);

return $result;
}

//add($conn, "item_stocks", "); contoh pemanggilan

function drop($conn, $table, $col) 
{
	
$sql="ALTER TABLE $table DROP $col";
$result=$conn->query($sql);

return $result;
}
?>
