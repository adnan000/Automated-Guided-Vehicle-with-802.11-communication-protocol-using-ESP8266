<?php

function insert($conn, $into, $values) 
{

$sql=$conn->query("INSERT INTO $into
					VALUES $values ");
							 
if ($conn->query($sql) === TRUE) {
  echo "Record updated successfully";
} else {
  echo "Error updating record: " . $conn->error;
}
}
#insert($conn, "item_stocks (Item, Location, Status)", "('Vitacov', 'Point(1 1)', '1')"); contoh pemanggilan
?>

