#pragma once
#include "Hand.h"
#include "PokerHandChecker.h"
#include "FullHouseChecker.h"
#include "FlushChecker.h"
#include "TwoPairChecker.h"
#include "PairChecker.h"

class ScoringRule {
public:
	ScoringRule();
	int scoreHand(const Hand& hand);

private:
	FullHouseChecker fullHouseChecker;
	FlushChecker flushChecker;
	TwoPairChecker twoPairChecker;
	PairChecker pairChecker;
	int convertRankToScore(HandRank rank);
};