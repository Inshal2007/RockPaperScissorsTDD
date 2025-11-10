#include "pch.h"
#include "rps.h"
#include <algorithm>
#include <cctype>

static std::string toLower(const std::string& s) {
    std::string out(s);
    std::transform(out.begin(), out.end(), out.begin(), [](unsigned char c) {
        return static_cast<char>(std::tolower(c));
    });
    return out;
}

static bool isValidMove(const std::string& move) {
    return move == "rock" || move == "paper" || move == "scissors";
}

std::string rps(const std::string& player1, const std::string& player2)
{
    std::string p1 = toLower(player1);
    std::string p2 = toLower(player2);

    if (!isValidMove(p1) || !isValidMove(p2)) {
        return "Invalid input";
    }

    if (p1 == p2) {
        return "It's a draw";
    }

    if ((p1 == "rock" && p2 == "scissors") ||
        (p1 == "paper" && p2 == "rock") ||
        (p1 == "scissors" && p2 == "paper")) {
        return "Player 1 wins";
    } else {
        return "Player 2 wins";
    }
}