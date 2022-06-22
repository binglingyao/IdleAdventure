/*
 * @Author: ls02 <2877455773@qq.com>
 * @Date: 2022-06-22 10:46:34
 * @LastEditors: ls02 <2877455773@qq.com>
 * @LastEditTime: 2022-06-22 14:02:09
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
 *            ���汣��     ����崻�     ����BUG
 */

#ifndef __ATTRIBUTE_HPP__
#define __ATTRIBUTE_HPP__
#include <iostream>
#include <string>

namespace ls
{
    //��������
    class CharacterAttributes
    {
    protected:
        // ����
        std::string _name;
        // Ѫ��
        long _hP;
        // ħ��ֵ
        long _mP;
        // ������
        long _baseDamage;
        // ħ��������
        long _mBaseDamage;
        // ������
        long _defense;
        // ħ��
        long _mDefense;
        // ������
        double _criticalChance;
        //�����˺�
        long _critDamage;
        //����
        double _damageImmunity;
        // ����ֵ
        double _luck;
        // �ƶ��ٶ�
        long _movementSpeed;
        // ������Ѫ
        double _lifeSteal;

        public:
        
        /**
         * @description: Ĭ�Ϲ��캯��
         * @param {string} name ����
         * @param {long} hP Ѫ��
         * @param {long} mP ����
         * @param {long} baseDamage ������
         * @param {long} mBaseDamage ħ��������
         * @param {long} defense ������
         * @param {long} mDefense ħ��
         * @param {double} criticalChance ������
         * @param {long} critDamage �����˺�
         * @param {double} damageImmunity ����
         * @param {double} luck ����ֵ
         * @param {long} movementSpeed �ƶ��ٶ�
         * @param {double} lifeSteal ������Ѫ
         * @return {*} �޷���ֵ
         */
        CharacterAttributes(\
            std::string name = "test",\
            long hP = 100,\
            long mP = 100,\
            long baseDamage = 20,\
            long mBaseDamage = 20,\
            long defense = 20,\
            long mDefense = 20,\
            double criticalChance = 0.2,\
            long critDamage = 40,\
            double damageImmunity = 0.1,\
            double luck = 0.001,\
            long movementSpeed = 325,\
            double lifeSteal = 0.05,\
            )
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
    }

    /**
     * @description: ��ȡ����
     * @return {string}
     */
    std::string GetName(void)
    {
        return _name;
    }

    /**
     * @description: ��ȡѪ��
     * @return {long} _hP
     */
    long GetHP(void)
    {
        return _hP;
    }

    /**
     * @description: ��ȡ����
     * @return {long} _mp
     */
    long GetMP(void)
    {
        return _mp;
    }

    /**
     * @description: ��ȡ������ 
     * @return {long} _baseDamage
     */
    long GetBaseDamage(void)
    {
        return _baseDamage;
    }

    /**
     * @description:  ħ��������
     * @return {long} _mBaseDamage
     */    
    long GetMBaseDamage(void)
    {
        return _mBaseDamage;
    }

    /**
     * @description: ��ȡ������
     * @return {long} _Defense
     */    
    long GetDefense(void)
    {
        return _Defense;
    }

    /**
     * @description: ��ȡħ��
     * @return {long} _mDefense
     */
    long GetMDefense(void)
    {
        return _mDefense;
    }

    /**
     * @description: ������
     * @return {double} _criticalChance
     */
    double GetCriticalChance(void)
    {
        return _criticalChance;
    }

    /**
     * @description: ��ȡ�����˺�
     * @return {long}  _critDamage
     */
    long GetCritDamage(void)
    {
        return _critDamage;
    }

    /**
     * @description: ����
     * @return {double} _damageImmunity
     */
    double GetDamageImmunity(void)
    {
        return _damageImmunity;
    }

    /**
     * @description: ��ȡ����ֵ
     * @return {double} _luck
     */
    double GetLuck(void)
    {
        return _luck;
    }

    /**
     * @description:  ��ȡ�ƶ��ٶ�
     * @return {long} _movementSpeed
     */
    long GetMovementSpeed(void)
    {
        return _movementSpeed;
    }

    /**
     * @description: ��ȡ������Ѫ
     * @return {double} _lifeSteal
     */
    double GetLifeSteal(void)
    {
        return _lifeSteal;
    }

    /**
     * @description: �޸�����
     * @param {string} name
     * @return {*}
     */
    void SetName(std::string name)
    {
        _name = name;
    }

    /**
     * @description: ����Ѫ��
     * @param {long} hP
     * @return {*}
     */
    void SetHP(long hP)
    {
        _hP = hP;
    }

    /**
     * @description: ��������
     * @param {long} mP
     * @return {*}
     */
    void SetMP(long mP)
    {
        _mP = mP;
    }

    /**
     * @description: ���ù�����
     * @param {long} baseDamage
     * @return {*}
     */
    void SetBaseDamage(long baseDamage)
    {
        _baseDamage = baseDamage;
    }

    /**
     * @description: ����ħ��������
     * @param {long} mBaseDamage
     * @return {*}
     */
    void SetMBaseDamage(long mBaseDamage)
    {
        _mBaseDamage = mBaseDamage;
    }

    /**
     * @description: ���÷�����
     * @param {long} defense
     * @return {*}
     */
    void SetDefense(long defense)
    {
        _defense = defense;
    }

    /**
     * @description: ����ħ��
     * @param {long} mDefense
     * @return {*}
     */
    void SetMDefense(long mDefense)
    {
        _mDefense = mDefense;
    }

    /**
     * @description: ���ñ�����
     * @param {double} criticalChance
     * @return {*}
     */
    void SetCriticalChance(double criticalChance)
    {
        _criticalChance = criticalChance;
    }

    /**
     * @description: ���ñ����˺�
     * @param {long} critDamage
     * @return {*}
     */
    void SetCritDamage(long critDamage)
    {
        _critDamage = critDamage;
    }

    /**
     * @description: ����
     * @param {double} damageImmunity
     * @return {*}
     */
    void SetDamageImmunity(double damageImmunity)
    {
        _damageImmunity = damageImmunity;
    }

    /**
     * @description: ��������ֵ
     * @param {double} luck
     * @return {*}
     */
    void SetLuck(double luck)
    {
        _luck = luck;
    }

    /**
     * @description: �����ƶ��ٶ�
     * @param {long} movementSpeed
     * @return {*}
     */
    void SetMovementSpeed(long movementSpeed)
    {
        _movementSpeed = movementSpeed;
    }

    /**
     * @description: ����������Ѫ
     * @param {double} lifeSteal
     * @return {*}
     */
    void SetLifeSteal(double lifeSteal)
    {
        _lifeSteal = lifeSteal;
    }
}

#endif