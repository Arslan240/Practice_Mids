cmake_minimum_required(VERSION 3.20)
project(Practice_Mids)

set(CMAKE_CXX_STANDARD 14)

add_executable(Practice_Mids Stack_Problems/reverse_string_using_stack/stack_questions_geeksforgeeks.c Stack_Problems/reverse_string_using_stack/reverse_string.c Stack_Problems/two_stacks_in_one_array/two_stacks_in_one_array.c Stack_Problems/parenthesis_balance_checker/parenthesis_balance_checker.c "Linked_List Problems/queue_using_linked_list.c" "Linked_List Problems/stack_using_linked_list.c" "Linked_List Problems/node.h" "Linked_List Problems/reverse_data_of_linked_list.c" "Linked_List Problems/concatenate_two_linked_lists.c" "Linked_List Problems/count_even_nodes.c" "Linked_List Problems/sort_linked_list_data.c" "Linked_List Problems/Add two polynomials/add_two_polynomials.c" "Linked_List Problems/Add two polynomials/poly_node.h" "Linked_List Problems/delete_duplicate_nodes.c" "Linked_List Problems/shuffle_merge_two_linked_lists.c" "Linked_List Problems/double_node.h")
