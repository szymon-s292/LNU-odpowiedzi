from secret_base_of_horrible_baddies import get_secret_plan

stolen_plans = {}

def steal_plans(plan_list):
    stolen_plans_list = []
    for plan_number in plan_list:
        if plan_number not in stolen_plans:
            plan = get_secret_plan(plan_number)
            
            if plan is not None:
                stolen_plans[plan_number] = plan
                
        plan = stolen_plans[plan_number]
        stolen_plans_list.append(plan)
    
    return stolen_plans_list

