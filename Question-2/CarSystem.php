<?php
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $name = $_POST['name'];
    $model = $_POST['model'];
    $year = $_POST['year'];

    // Database connection
    $conn = new mysqli('localhost', 'root', '', 'form');
    if ($conn->connect_error) {
        die("Connection Failed: " . $conn->connect_error);
    }

    // Check the car type and process accordingly
    if (isset($_POST['formOption'])) {
        $carType = strtolower(trim($_POST['formOption']));

        if ($carType === 'option1') {
            $battery = $_POST['battery'];

            $stmt = $conn->prepare("INSERT INTO entry (Car_Name, Car_Model, Year, Battery_Capacity) VALUES (?, ?, ?, ?)");
            $stmt->bind_param("ssii", $name, $model, $year, $battery);
        } elseif ($carType === 'option2') {
            $fuel = $_POST['fuel'];

            $stmt = $conn->prepare("INSERT INTO entry (Car_Name, Car_Model, Year, Fuel_Efficiency) VALUES (?, ?, ?, ?)");
            $stmt->bind_param("ssii", $name, $model, $year, $fuel);
        } else {
            echo "Invalid car type.";
            exit();
        }

        // Execute the statement
        $execval = $stmt->execute();

        if ($execval) {
            echo "Car Information Saved.";
        } else {
            echo "Error: " . $stmt->error;
        }

        // Close the connection
        $stmt->close();
    } else {
        echo "Car type not set.";
        exit();
    }

    $conn->close();
}
?>
