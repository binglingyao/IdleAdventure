/*
 * @Author: ls02 <2877455773@qq.com>
 * @Date: 2022-06-22 10:46:34
 * @LastEditors: ls02 <2877455773@qq.com>
 * @LastEditTime: 2022-06-26 18:39:37
 * @FilePath: \IdleAdventure\Attribute.hpp
 * @Description: 
 * 
 * Copyright (c) 2022 by ${ls02 <2877455773@qq.com>}, All Rights Reserved. 
 */
/*
 *                        _oo0oo_
 *                       o8888888o
 *                       88" . "88
 *                       (| -_- |)
 *                       0\  =  /0
 *                     ___/`---'\___
 *                   .' \\|     |// '.
 *                  / \\|||  :  |||// \
 *                 / _||||| -:- |||||- \
 *                |   | \\\  - /// |   |
 *                | \_|  ''\---/''  |_/ |
 *                \  .-\__  '-'  ___/-. /
 *              ___'. .'  /--.--\  `. .'___
 *           ."" '<  `.___\_<|>_/___.' >' "".
 *          | | :  `- \`.;`\ _ /`;.`/ - ` : | |
 *          \  \ `_.   \_ __\ /__ _/   .-` /  /
 *      =====`-.____`.___ \_____/___.-`___.-'=====
 *                        `=---='
 * 
 * 
 *      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * 
 *            佛祖保佑     永不宕机     永无BUG
 */

#ifndef __ATTRIBUTE_HPP__
#define __ATTRIBUTE_HPP__
#include <iostream>
#include <string>

namespace ls
{
    //人物属性
    class CharacterAttributes
    {
    protected:
        // 姓名
        std::string _name;
        // 血量
        long _hP;
        // 魔力值
        long _mP;
        // 攻击力
        long _baseDamage;
        // 魔法攻击力
        long _mBaseDamage;
        // 防御力
        long _defense;
        // 魔抗
        long _mDefense;
        // 暴击率
        double _criticalChance;
        //暴击伤害
        long _critDamage;
        //免伤
        double _damageImmunity;
        // 幸运值
        double _luck;
        // 移动速度
        long _movementSpeed;
        // 攻击吸血
        double _lifeSteal;

    public:

        /**
         * @description: 默认构造函数
         * @param {string} name 名字
         * @param {long} hP 血量
         * @param {long} mP 蓝量
         * @param {long} baseDamage 攻击力
         * @param {long} mBaseDamage 魔法攻击力
         * @param {long} defense 防御力
         * @param {long} mDefense 魔抗
         * @param {double} criticalChance 暴击率
         * @param {long} critDamage 暴击伤害
         * @param {double} damageImmunity 免伤
         * @param {double} luck 幸运值
         * @param {long} movementSpeed 移动速度
         * @param {double} lifeSteal 攻击吸血
         * @return {*} 无返回值
         */
        CharacterAttributes(\
            std::string name = "test", \
            long hP = 100, \
            long mP = 100, \
            long baseDamage = 20, \
            long mBaseDamage = 20, \
            long defense = 20, \
            long mDefense = 20, \
            double criticalChance = 0.2, \
            long critDamage = 40, \
            double damageImmunity = 0.1, \
            double luck = 0.001, \
            long movementSpeed = 325, \
            double lifeSteal = 0.05)
            : _hP(hP)
            , _mP(mP)
            , _baseDamage(baseDamage)
            , _mBaseDamage(mBaseDamage)
            , _defense(defense)
            , _mDefense(mDefense)
            , _criticalChance(criticalChance)
            , _critDamage(critDamage)
            , _damageImmunity(damageImmunity)
            , _luck(luck)
            , _movementSpeed(movementSpeed)
            , _lifeSteal(lifeSteal)
        {}

        /**
        * @description: 获取名字
        * @return {string}
        */
        std::string GetName(void)
        {
            return _name;
        }

        /**
         * @description: 获取血量
         * @return {long} _hP
         */
        long GetHP(void)
        {
            return _hP;
        }

        /**
         * @description: 获取蓝量
         * @return {long} _mp
         */
        long GetMP(void)
        {
            return _mP;
        }

        /**
         * @description: 获取攻击力
         * @return {long} _baseDamage
         */
        long GetBaseDamage(void)
        {
            return _baseDamage;
        }

        /**
         * @description:  魔法攻击力
         * @return {long} _mBaseDamage
         */
        long GetMBaseDamage(void)
        {
            return _mBaseDamage;
        }

        /**
         * @description: 获取防御力
         * @return {long} _Defense
         */
        long GetDefense(void)
        {
            return _defense;
        }

        /**
         * @description: 获取魔抗
         * @return {long} _mDefense
         */
        long GetMDefense(void)
        {
            return _mDefense;
        }

        /**
         * @description: 暴击率
         * @return {double} _criticalChance
         */
        double GetCriticalChance(void)
        {
            return _criticalChance;
        }

        /**
         * @description: 获取暴击伤害
         * @return {long}  _critDamage
         */
        long GetCritDamage(void)
        {
            return _critDamage;
        }

        /**
         * @description: 免伤
         * @return {double} _damageImmunity
         */
        double GetDamageImmunity(void)
        {
            return _damageImmunity;
        }

        /**
         * @description: 获取幸运值
         * @return {double} _luck
         */
        double GetLuck(void)
        {
            return _luck;
        }

        /**
         * @description:  获取移动速度
         * @return {long} _movementSpeed
         */
        long GetMovementSpeed(void)
        {
            return _movementSpeed;
        }

        /**
         * @description: 获取攻击吸血
         * @return {double} _lifeSteal
         */
        double GetLifeSteal(void)
        {
            return _lifeSteal;
        }

        /**
         * @description: 修改名字
         * @param {string} name
         * @return {*}
         */
        void SetName(std::string name)
        {
            _name = name;
        }

        /**
         * @description: 设置血量
         * @param {long} hP
         * @return {*}
         */
        void SetHP(long hP)
        {
            _hP = hP;
        }

        /**
         * @description: 设置蓝量
         * @param {long} mP
         * @return {*}
         */
        void SetMP(long mP)
        {
            _mP = mP;
        }

        /**
         * @description: 设置攻击力
         * @param {long} baseDamage
         * @return {*}
         */
        void SetBaseDamage(long baseDamage)
        {
            _baseDamage = baseDamage;
        }

        /**
         * @description: 设置魔法攻击力
         * @param {long} mBaseDamage
         * @return {*}
         */
        void SetMBaseDamage(long mBaseDamage)
        {
            _mBaseDamage = mBaseDamage;
        }

        /**
         * @description: 设置防御力
         * @param {long} defense
         * @return {*}
         */
        void SetDefense(long defense)
        {
            _defense = defense;
        }

        /**
         * @description: 设置魔抗
         * @param {long} mDefense
         * @return {*}
         */
        void SetMDefense(long mDefense)
        {
            _mDefense = mDefense;
        }

        /**
         * @description: 设置暴击率
         * @param {double} criticalChance
         * @return {*}
         */
        void SetCriticalChance(double criticalChance)
        {
            _criticalChance = criticalChance;
        }

        /**
         * @description: 设置暴击伤害
         * @param {long} critDamage
         * @return {*}
         */
        void SetCritDamage(long critDamage)
        {
            _critDamage = critDamage;
        }

        /**
         * @description: 免伤
         * @param {double} damageImmunity
         * @return {*}
         */
        void SetDamageImmunity(double damageImmunity)
        {
            _damageImmunity = damageImmunity;
        }

        /**
         * @description: 设置幸运值
         * @param {double} luck
         * @return {*}
         */
        void SetLuck(double luck)
        {
            _luck = luck;
        }

        /**
         * @description: 设置移动速度
         * @param {long} movementSpeed
         * @return {*}
         */
        void SetMovementSpeed(long movementSpeed)
        {
            _movementSpeed = movementSpeed;
        }

        /**
         * @description: 设置物理吸血
         * @param {double} lifeSteal
         * @return {*}
         */
        void SetLifeSteal(double lifeSteal)
        {
            _lifeSteal = lifeSteal;
        }
    };
}



#endif