<?php
// Database connection details
$host = 'localhost';
$db_user = 'root';
$db_password = '';
$db_name = 'robx24';

// Create connection
$conn = new mysqli($host, $db_user, $db_password, $db_name);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Fetch the latest command
$sql = "SELECT MOVEMENTS FROM robx24_controlling_system ORDER BY ID DESC LIMIT 1";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    // output data of each row
    while($row = $result->fetch_assoc()) {
        echo $row["MOVEMENTS"];
    }
} else {
    echo "no command";
}

$conn->close();
?>