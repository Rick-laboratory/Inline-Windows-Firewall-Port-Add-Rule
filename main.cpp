#include "Inline_port_rule_preparation.h"
int main()
{
	Inline_port_rule_preparation Windows_Firewall_Port_Rule(1337,NET_FW_IP_PROTOCOL_UDP,L"Rule_Name");
}
