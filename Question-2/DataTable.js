$(document).ready(function() {
    // Initialize DataTables with Bootstrap
    $('#myDataTable').DataTable({
        'ajax': 'CarSystem.php', // Replace with the actual path to your PHP script
        'columns': [
            { 'data': 'Name' },
            { 'data': 'Car Model' },
            { 'data': 'Year' },
            { 'data': 'Enter battery capacity (kWh):' },
            { 'data': 'Enter fuel efficiency (MPG):' },

            // Add more columns as needed
        ]
    });
});