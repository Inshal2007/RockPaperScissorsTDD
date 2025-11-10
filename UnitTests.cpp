#include <stdio.h>
#include "pch.h"
#include "CppUnitTest.h"
#include "rps.h"
#include <algorithm>
#include <cctype>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Assignment3unittest
{
	TEST_CLASS(Assignment3unittest)
	{
	public:
		
		TEST_METHOD(Draw_When_Both_Rock)
		{
			Assert::AreEqual(std::string("It's a draw"), rps("Rock", "Rock"));
		}
		
		TEST_METHOD(Draw_When_Both_Paper)
		{
			Assert::AreEqual(std::string("It's a draw"), rps("Paper", "Paper"));
		}

		TEST_METHOD(Draw_When_Both_Scissors)
		{
			Assert::AreEqual(std::string("It's a draw"), rps("Scissors", "Scissors"));
		}

		TEST_METHOD(Player1_Wins_When_Rock_VS_Scissors)
		{
			Assert::AreEqual(std::string("Player 1 wins"), rps("Rock", "Scissors"));
		}

		TEST_METHOD(Player2_Wins_When_Rock_VS_Paper)
		{
			Assert::AreEqual(std::string("Player 2 wins"), rps("Rock", "Paper"));
		}

		TEST_METHOD(Player1_Wins_When_Paper_VS_Rock)
		{
			Assert::AreEqual(std::string("Player 1 wins"), rps("Paper", "Rock"));
		}

		TEST_METHOD(Player2_Wins_When_Rock_VS_Scissors)
		{
			Assert::AreEqual(std::string("Player 2 wins"), rps("Scissors", "Rock"));
		}

		TEST_METHOD(Player1_Wins_When_Scissors_VS_Paper)
		{
			Assert::AreEqual(std::string("Player 1 wins"), rps("Scissors", "Paper"));
		}

		TEST_METHOD(Player2_Wins_When_Scissors_VS_Paper)
		{
			Assert::AreEqual(std::string("Player 2 wins"), rps("Paper", "Scissors"));
		}

		TEST_METHOD(Invalid_When_Player1_Player2_Inputs_Garbage_Input)
		{
			Assert::AreEqual(std::string("Invalid input"), rps("Invalid", "Invalid"));
		}

		TEST_METHOD(Invalid_When_Player1_Inputs_Garbage_Inputv1)
		{
			Assert::AreEqual(std::string("Invalid input"), rps("Invalid", "Rock"));
		}

		TEST_METHOD(Invalid_When_Player1_Inputs_Garbage_Inputv2)
		{
			Assert::AreEqual(std::string("Invalid input"), rps("Invalid", "Paper"));
		}
	
		TEST_METHOD(Invalid_When_Player1_Inputs_Garbage_Inputv3)
		{
			Assert::AreEqual(std::string("Invalid input"), rps("Invalid", "Scissors"));
		}
		
		TEST_METHOD(Invalid_When_Player2_Inputs_Garbage_Inputv1)
		{
			Assert::AreEqual(std::string("Invalid input"), rps("Rock", "Invalid"));
		}
		
		TEST_METHOD(Invalid_When_Player2_Inputs_Garbage_Inputv2)
		{
			Assert::AreEqual(std::string("Invalid input"), rps("Paper", "Invalid"));
		}

		TEST_METHOD(Invalid_When_Player2_Inputs_Garbage_Inputv3)
		{
			Assert::AreEqual(std::string("Invalid input"), rps("Scissors", "Invalid"));
		}
	};
}
