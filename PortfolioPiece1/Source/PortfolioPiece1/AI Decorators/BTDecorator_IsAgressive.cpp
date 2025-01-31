// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_IsAgressive.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTDecorator_IsAgressive::UBTDecorator_IsAgressive()
{
	NodeName = "Agressive check";
	conditionToCheck = false;
}

bool UBTDecorator_IsAgressive::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	UBlackboardComponent* blackboard = OwnerComp.GetBlackboardComponent();

	bool agressive = blackboard->GetValueAsBool("Is Agressive");
	
	return (agressive == conditionToCheck);
}
