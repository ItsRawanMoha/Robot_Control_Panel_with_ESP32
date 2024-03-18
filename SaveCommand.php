<?php
// Database credentials
$host = 'localhost';
$db_user = 'root';
$db_password = '';
$db_name = 'robx24';

// Establish connection
$conn = mysqli_connect($host, $db_user, $db_password, $db_name);

// Fetch the latest command from the database
$sql = "SELECT movements FROM robx24_controlling_system ORDER BY ID DESC LIMIT 1";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    // output data of each row
    while($row = $result->fetch_assoc()) {
        $command = htmlspecialchars($row["movements"]);
        // Output command
        echo $command;
    }
} else {
    // No command found
    echo "N";
}

$conn->close();
?>