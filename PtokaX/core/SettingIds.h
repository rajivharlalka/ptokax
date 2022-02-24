/*
 * PtokaX - hub server for Direct Connect peer to peer network.

 * Copyright (C) 2004-2017  Petr Kozelka, PPK at PtokaX dot org

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3
 * as published by the Free Software Foundation.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

//---------------------------------------------------------------------------
#ifndef SettingIdsH
#define SettingIdsH
//---------------------------------------------------------------------------

enum SetBoolIds {
    SETBOOL_ANTI_MOGLO, 
    SETBOOL_AUTO_START, 
    SETBOOL_REDIRECT_ALL, 
    SETBOOL_REDIRECT_WHEN_HUB_FULL, 
    SETBOOL_AUTO_REG, 
    SETBOOL_REG_ONLY, 
    SETBOOL_REG_ONLY_REDIR, 
    SETBOOL_SHARE_LIMIT_REDIR, 
    SETBOOL_SLOTS_LIMIT_REDIR, 
    SETBOOL_HUB_SLOT_RATIO_REDIR, 
    SETBOOL_MAX_HUBS_LIMIT_REDIR, 
    SETBOOL_MODE_TO_MYINFO, 
    SETBOOL_MODE_TO_DESCRIPTION, 
    SETBOOL_STRIP_DESCRIPTION, 
    SETBOOL_STRIP_TAG, 
    SETBOOL_STRIP_CONNECTION, 
    SETBOOL_STRIP_EMAIL, 
    SETBOOL_REG_BOT, 
    SETBOOL_USE_BOT_NICK_AS_HUB_SEC, 
    SETBOOL_REG_OP_CHAT, 
    SETBOOL_TEMP_BAN_REDIR, 
    SETBOOL_PERM_BAN_REDIR, 
    SETBOOL_ENABLE_SCRIPTING, 
    SETBOOL_KEEP_SLOW_USERS, 
    SETBOOL_CHECK_NEW_RELEASES, 
    SETBOOL_ENABLE_TRAY_ICON, 
    SETBOOL_START_MINIMIZED, 
    SETBOOL_FILTER_KICK_MESSAGES, 
    SETBOOL_SEND_KICK_MESSAGES_TO_OPS, 
    SETBOOL_SEND_STATUS_MESSAGES, 
    SETBOOL_SEND_STATUS_MESSAGES_AS_PM, 
    SETBOOL_ENABLE_TEXT_FILES, 
    SETBOOL_SEND_TEXT_FILES_AS_PM, 
    SETBOOL_STOP_SCRIPT_ON_ERROR, 
    SETBOOL_MOTD_AS_PM, 
    SETBOOL_DEFLOOD_REPORT, 
    SETBOOL_REPLY_TO_HUB_COMMANDS_AS_PM, 
    SETBOOL_DISABLE_MOTD, 
    SETBOOL_DONT_ALLOW_PINGERS, 
    SETBOOL_REPORT_PINGERS, 
    SETBOOL_REPORT_3X_BAD_PASS, 
    SETBOOL_ADVANCED_PASS_PROTECTION, 
    SETBOOL_BIND_ONLY_SINGLE_IP, 
    SETBOOL_RESOLVE_TO_IP, 
    SETBOOL_NICK_LIMIT_REDIR, 
OBSOLETE_SETBOOL_SEND_USERIP2_TO_USER_ON_LOGIN,
    SETBOOL_BAN_MSG_SHOW_IP, 
    SETBOOL_BAN_MSG_SHOW_RANGE, 
    SETBOOL_BAN_MSG_SHOW_NICK, 
    SETBOOL_BAN_MSG_SHOW_REASON, 
    SETBOOL_BAN_MSG_SHOW_BY, 
    SETBOOL_REPORT_SUSPICIOUS_TAG, 
OBSOLETE_SETBOOL_ACCEPT_UNKNOWN_TAG,
OBSOLETE_SETBOOL_CHECK_IP_IN_COMMANDS, 
OBSOLETE_SETBOOL_POPUP_SCRIPT_WINDOW,
    SETBOOL_LOG_SCRIPT_ERRORS, 
    SETBOOL_NO_QUACK_SUPPORTS, 
    SETBOOL_HASH_PASSWORDS,
#if defined(_WITH_SQLITE) || defined(_WITH_POSTGRES) || defined(_WITH_MYSQL)
    SETBOOL_ENABLE_DATABASE,
#endif
    SETBOOL_IDS_END
};//SETBOOL_, 

enum SetShortIds {
    SETSHORT_MAX_USERS, 
    SETSHORT_MIN_SHARE_LIMIT, 
    SETSHORT_MIN_SHARE_UNITS, 
    SETSHORT_MAX_SHARE_LIMIT, 
    SETSHORT_MAX_SHARE_UNITS, 
    SETSHORT_MIN_SLOTS_LIMIT, 
    SETSHORT_MAX_SLOTS_LIMIT, 
    SETSHORT_HUB_SLOT_RATIO_HUBS, 
    SETSHORT_HUB_SLOT_RATIO_SLOTS, 
    SETSHORT_MAX_HUBS_LIMIT, 
    SETSHORT_NO_TAG_OPTION, 
    SETSHORT_FULL_MYINFO_OPTION, 
    SETSHORT_MAX_CHAT_LEN, 
    SETSHORT_MAX_CHAT_LINES, 
    SETSHORT_MAX_PM_LEN, 
    SETSHORT_MAX_PM_LINES, 
    SETSHORT_DEFAULT_TEMP_BAN_TIME, 
    SETSHORT_MAX_PASIVE_SR, 
    SETSHORT_MYINFO_DELAY, 
    SETSHORT_MAIN_CHAT_MESSAGES, 
    SETSHORT_MAIN_CHAT_TIME, 
    SETSHORT_MAIN_CHAT_ACTION, 
    SETSHORT_SAME_MAIN_CHAT_MESSAGES, 
    SETSHORT_SAME_MAIN_CHAT_TIME, 
    SETSHORT_SAME_MAIN_CHAT_ACTION, 
    SETSHORT_SAME_MULTI_MAIN_CHAT_MESSAGES, 
    SETSHORT_SAME_MULTI_MAIN_CHAT_LINES, 
    SETSHORT_SAME_MULTI_MAIN_CHAT_ACTION, 
    SETSHORT_PM_MESSAGES, 
    SETSHORT_PM_TIME, 
    SETSHORT_PM_ACTION, 
    SETSHORT_SAME_PM_MESSAGES, 
    SETSHORT_SAME_PM_TIME, 
    SETSHORT_SAME_PM_ACTION, 
    SETSHORT_SAME_MULTI_PM_MESSAGES, 
    SETSHORT_SAME_MULTI_PM_LINES, 
    SETSHORT_SAME_MULTI_PM_ACTION, 
    SETSHORT_SEARCH_MESSAGES, 
    SETSHORT_SEARCH_TIME, 
    SETSHORT_SEARCH_ACTION, 
    SETSHORT_SAME_SEARCH_MESSAGES, 
    SETSHORT_SAME_SEARCH_TIME, 
    SETSHORT_SAME_SEARCH_ACTION, 
    SETSHORT_MYINFO_MESSAGES, 
    SETSHORT_MYINFO_TIME, 
    SETSHORT_MYINFO_ACTION, 
    SETSHORT_GETNICKLIST_MESSAGES, 
    SETSHORT_GETNICKLIST_TIME, 
    SETSHORT_GETNICKLIST_ACTION, 
    SETSHORT_NEW_CONNECTIONS_COUNT, 
    SETSHORT_NEW_CONNECTIONS_TIME, 
    SETSHORT_DEFLOOD_WARNING_COUNT, 
    SETSHORT_DEFLOOD_WARNING_ACTION, 
    SETSHORT_DEFLOOD_TEMP_BAN_TIME, 
    SETSHORT_GLOBAL_MAIN_CHAT_MESSAGES, 
    SETSHORT_GLOBAL_MAIN_CHAT_TIME, 
    SETSHORT_GLOBAL_MAIN_CHAT_TIMEOUT, 
    SETSHORT_GLOBAL_MAIN_CHAT_ACTION, 
    SETSHORT_MIN_SEARCH_LEN, 
    SETSHORT_MAX_SEARCH_LEN, 
    SETSHORT_MIN_NICK_LEN, 
    SETSHORT_MAX_NICK_LEN, 
    SETSHORT_BRUTE_FORCE_PASS_PROTECT_BAN_TYPE, 
    SETSHORT_BRUTE_FORCE_PASS_PROTECT_TEMP_BAN_TIME, 
    SETSHORT_MAX_PM_COUNT_TO_USER,
    SETSHORT_MAX_SIMULTANEOUS_LOGINS,  
    SETSHORT_MAIN_CHAT_MESSAGES2, 
    SETSHORT_MAIN_CHAT_TIME2, 
    SETSHORT_MAIN_CHAT_ACTION2, 
    SETSHORT_PM_MESSAGES2, 
    SETSHORT_PM_TIME2, 
    SETSHORT_PM_ACTION2, 
    SETSHORT_SEARCH_MESSAGES2, 
    SETSHORT_SEARCH_TIME2, 
    SETSHORT_SEARCH_ACTION2, 
    SETSHORT_MYINFO_MESSAGES2, 
    SETSHORT_MYINFO_TIME2, 
    SETSHORT_MYINFO_ACTION2, 
    SETSHORT_MAX_MYINFO_LEN, 
    SETSHORT_CTM_MESSAGES, 
    SETSHORT_CTM_TIME, 
    SETSHORT_CTM_ACTION, 
    SETSHORT_CTM_MESSAGES2, 
    SETSHORT_CTM_TIME2, 
    SETSHORT_CTM_ACTION2, 
    SETSHORT_RCTM_MESSAGES, 
    SETSHORT_RCTM_TIME, 
    SETSHORT_RCTM_ACTION, 
    SETSHORT_RCTM_MESSAGES2, 
    SETSHORT_RCTM_TIME2, 
    SETSHORT_RCTM_ACTION2, 
    SETSHORT_MAX_CTM_LEN, 
    SETSHORT_MAX_RCTM_LEN, 
    SETSHORT_SR_MESSAGES, 
    SETSHORT_SR_TIME, 
    SETSHORT_SR_ACTION, 
    SETSHORT_SR_MESSAGES2, 
    SETSHORT_SR_TIME2, 
    SETSHORT_SR_ACTION2, 
    SETSHORT_MAX_SR_LEN, 
    SETSHORT_MAX_DOWN_ACTION, 
    SETSHORT_MAX_DOWN_KB, 
    SETSHORT_MAX_DOWN_TIME, 
    SETSHORT_MAX_DOWN_ACTION2, 
    SETSHORT_MAX_DOWN_KB2, 
    SETSHORT_MAX_DOWN_TIME2, 
    SETSHORT_CHAT_INTERVAL_MESSAGES, 
    SETSHORT_CHAT_INTERVAL_TIME, 
    SETSHORT_PM_INTERVAL_MESSAGES, 
    SETSHORT_PM_INTERVAL_TIME, 
    SETSHORT_SEARCH_INTERVAL_MESSAGES, 
    SETSHORT_SEARCH_INTERVAL_TIME, 
    SETSHORT_MAX_CONN_SAME_IP, 
    SETSHORT_MIN_RECONN_TIME, 
#if defined(_WITH_SQLITE) || defined(_WITH_POSTGRES) || defined(_WITH_MYSQL)
    SETSHORT_DB_REMOVE_OLD_RECORDS,
#endif
    SETSHORT_MAX_USERS_PEAK, 
    SETSHORT_IDS_END
};//SETSHORT_, 

enum SetTxtIds {
    SETTXT_HUB_NAME, 
    SETTXT_ADMIN_NICK, 
    SETTXT_HUB_ADDRESS, 
    SETTXT_TCP_PORTS, 
    SETTXT_UDP_PORT, 
    SETTXT_HUB_DESCRIPTION, 
    SETTXT_REDIRECT_ADDRESS, 
    SETTXT_REGISTER_SERVERS, 
    SETTXT_REG_ONLY_MSG, 
    SETTXT_REG_ONLY_REDIR_ADDRESS, 
    SETTXT_HUB_TOPIC, 
    SETTXT_SHARE_LIMIT_MSG, 
    SETTXT_SHARE_LIMIT_REDIR_ADDRESS, 
    SETTXT_SLOTS_LIMIT_MSG, 
    SETTXT_SLOTS_LIMIT_REDIR_ADDRESS, 
    SETTXT_HUB_SLOT_RATIO_MSG, 
    SETTXT_HUB_SLOT_RATIO_REDIR_ADDRESS, 
    SETTXT_MAX_HUBS_LIMIT_MSG, 
    SETTXT_MAX_HUBS_LIMIT_REDIR_ADDRESS, 
    SETTXT_NO_TAG_MSG, 
    SETTXT_NO_TAG_REDIR_ADDRESS, 
    SETTXT_BOT_NICK, 
    SETTXT_BOT_DESCRIPTION, 
    SETTXT_BOT_EMAIL, 
    SETTXT_OP_CHAT_NICK, 
    SETTXT_OP_CHAT_DESCRIPTION, 
    SETTXT_OP_CHAT_EMAIL, 
    SETTXT_TEMP_BAN_REDIR_ADDRESS, 
    SETTXT_PERM_BAN_REDIR_ADDRESS, 
    SETTXT_CHAT_COMMANDS_PREFIXES, 
    SETTXT_HUB_OWNER_EMAIL, 
    SETTXT_NICK_LIMIT_MSG, 
    SETTXT_NICK_LIMIT_REDIR_ADDRESS, 
    SETTXT_MSG_TO_ADD_TO_BAN_MSG, 
    SETTXT_LANGUAGE, 
    SETTXT_IPV4_ADDRESS,
    SETTXT_IPV6_ADDRESS,
	SETTXT_ENCODING,
#ifdef _WITH_POSTGRES
	SETTXT_POSTGRES_HOST,
	SETTXT_POSTGRES_PORT,
	SETTXT_POSTGRES_DBNAME,
	SETTXT_POSTGRES_USER,
	SETTXT_POSTGRES_PASS,
#elif _WITH_MYSQL
	SETTXT_MYSQL_HOST,
	SETTXT_MYSQL_PORT,
	SETTXT_MYSQL_DBNAME,
	SETTXT_MYSQL_USER,
	SETTXT_MYSQL_PASS,
#endif
    SETTXT_IDS_END
};//SETTXT_, 
//---------------------------------------------------------------------------

#endif