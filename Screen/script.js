function incrementScore(teamId) {
    var scoreElement = document.getElementById(teamId);
    var currentScore = parseInt(scoreElement.innerText);
    scoreElement.innerText = currentScore + 1;
}
