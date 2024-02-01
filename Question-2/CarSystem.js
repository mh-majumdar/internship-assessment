function showForm(selectedOption) {
    if (selectedOption === 'option1') {
        document.getElementById('form1').style.display = 'block';
        document.getElementById('form2').style.display = 'none';
    } else if (selectedOption === 'option2') {
        document.getElementById('form1').style.display = 'none';
        document.getElementById('form2').style.display = 'block';
    }
}